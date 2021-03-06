//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExposureNotification/NSCopying-Protocol.h>
#import <ExposureNotification/NSSecureCoding-Protocol.h>

@class NSString;

@interface ENRegion : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_countryCode;
    NSString *_subdivisionCode;
}

+ (_Bool)supportsSecureCoding;
+ (id)regionWithCode:(id)arg1;
+ (id)regionFromServerResponseDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *subdivisionCode; // @synthesize subdivisionCode=_subdivisionCode;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (id)description;
@property(readonly, copy, nonatomic) NSString *regionCode;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)validSubdivisionCode;
- (_Bool)isSubdivisionCodeEqualToRegion:(id)arg1;
- (_Bool)isCountryCodeEqualToRegion:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCountryCode:(id)arg1 subdivisionCode:(id)arg2;
- (id)initWithCountryCode:(id)arg1;

@end

