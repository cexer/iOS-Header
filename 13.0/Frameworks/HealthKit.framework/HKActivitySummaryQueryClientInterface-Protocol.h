//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class NSArray, NSUUID;

@protocol HKActivitySummaryQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverActivitySummaries:(NSArray *)arg1 isFinalBatch:(_Bool)arg2 clearPendingBatches:(_Bool)arg3 queryUUID:(NSUUID *)arg4;
@end

