//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMBootstrapSettings, NSString;

@interface EDAMBootstrapProfile : FATObject
{
    NSString *_name;
    EDAMBootstrapSettings *_settings;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) EDAMBootstrapSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

