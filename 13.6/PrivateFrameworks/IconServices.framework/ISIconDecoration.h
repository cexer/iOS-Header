//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISIconDecoration-Protocol.h>
#import <IconServices/ISIconDecorationInternal-Protocol.h>
#import <IconServices/NSCopying-Protocol.h>

@class NSString, NSUUID;

@interface ISIconDecoration : NSObject <ISIconDecorationInternal, ISIconDecoration, NSCopying>
{
    long long _position;
    long long _mode;
    NSString *_identifier;
    unsigned long long _identifierKind;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) unsigned long long identifierKind; // @synthesize identifierKind=_identifierKind;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property long long mode; // @synthesize mode=_mode;
@property long long position; // @synthesize position=_position;
@property(readonly) NSUUID *resourceFingerprint;
@property(readonly, copy) NSString *description;
@property(readonly) NSUUID *uuid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)init;
- (id)imageForDescriptor:(id)arg1;
- (void)prepareImagesForDescriptors:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

