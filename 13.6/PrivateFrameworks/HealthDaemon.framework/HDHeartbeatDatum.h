//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDHeartbeatDatum : NSObject
{
    _Bool _precededByGap;
    double _timeSinceSequenceStart;
}

+ (id)datumWithTimeSinceSequenceStart:(double)arg1 preceededByGap:(_Bool)arg2;
@property(readonly, nonatomic) _Bool precededByGap; // @synthesize precededByGap=_precededByGap;
@property(readonly, nonatomic) double timeSinceSequenceStart; // @synthesize timeSinceSequenceStart=_timeSinceSequenceStart;

@end

