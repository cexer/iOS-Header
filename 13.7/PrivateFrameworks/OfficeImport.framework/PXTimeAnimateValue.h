//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PXTimeAnimateValue : NSObject
{
    id mVariant;
    _Bool mHasPercentTime;
    double mPercentTime;
    NSString *mFormula;
}

- (void).cxx_destruct;
- (void)setFormula:(id)arg1;
- (id)formula;
- (void)setPercentTime:(double)arg1;
- (double)percentTime;
- (_Bool)hasPercentTime;
- (void)setVariant:(id)arg1;
- (id)variant;
- (id)init;

@end

