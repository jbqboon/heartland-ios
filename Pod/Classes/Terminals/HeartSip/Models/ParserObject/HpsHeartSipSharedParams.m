#import "HpsHeartSipSharedParams.h"

NSOperationQueue *operationQueue ;

@implementation HpsHeartSipSharedParams

+(HpsHeartSipSharedParams*)getInstance
{
	static id instance;
	static dispatch_once_t onceToken;
	dispatch_once(&onceToken, ^{
		instance = [[self alloc] init];
	});
	return instance;
}

-(id) init
{
	if (self = [super init])
		{
		self.params = [NSMutableDictionary new];
	 operationQueue = [[NSOperationQueue alloc] init];
		_transactionSummaryRecords = [NSMutableArray new];;
		_cardSummaryRecords = [NSMutableArray new];
		}
	return self;
}

-(void)addTranasactionSummaryRecords:(TransactionSummaryRecord *)Record
{
	[self.transactionSummaryRecords addObject:Record];
}

-(void)addCardSummaryRecords:(CardSummaryRecord *)Record
{
	[self.cardSummaryRecords addObject:Record];
}

-(void)addParaMeter:(NSString*)tableName withValues:(NSDictionary *)values
{
	[operationQueue addOperationWithBlock: ^{
		NSMutableDictionary *addMore;
		if (!( addMore = [[HpsHeartSipSharedParams getInstance].params objectForKey:tableName?tableName:self.tableCategory])) {
			[[HpsHeartSipSharedParams getInstance].params setValue:values forKey:tableName?tableName:self.tableCategory];
		}
		else
			{

			[addMore addEntriesFromDictionary:values];
			[[HpsHeartSipSharedParams getInstance].params setValue:addMore forKey:tableName?tableName:self.tableCategory];

			}

		self.tableCategory = tableName ? tableName :self->_tableCategory;

	}];
}

@end
