//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>

@class RTLearnedPlace;

@interface RTLearnedPlaceVersions : NSObject <NSCopying>
{
    _Bool _isRotted;
    RTLearnedPlace *_inferredVersion;
    RTLearnedPlace *_existingVersion;
    RTLearnedPlace *_truthfulCounterpart;
}

@property(nonatomic) _Bool isRotted; // @synthesize isRotted=_isRotted;
@property(retain, nonatomic) RTLearnedPlace *truthfulCounterpart; // @synthesize truthfulCounterpart=_truthfulCounterpart;
@property(retain, nonatomic) RTLearnedPlace *existingVersion; // @synthesize existingVersion=_existingVersion;
@property(retain, nonatomic) RTLearnedPlace *inferredVersion; // @synthesize inferredVersion=_inferredVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)trueVersion;

@end

