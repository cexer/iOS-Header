//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FIValidation : NSObject
{
    NSString *_name;
    CDUnknownBlockType _test;
}

+ (_Bool)performValidations:(id)arg1 withObject:(id)arg2 error:(id *)arg3;
+ (id)validationWithName:(id)arg1 test:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) CDUnknownBlockType test; // @synthesize test=_test;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)validateObject:(id)arg1 withError:(id *)arg2;

@end

