//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, PGManager;

@protocol PGFeatureExtractionSource <NSObject>
- (NSArray *)extractSharingRecordsWithManager:(PGManager *)arg1 progressBlock:(void (^)(double, _Bool *))arg2;
@end

