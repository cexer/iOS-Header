//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleLAN.h>

@class NSString;

@interface HMDNetworkRouterFirewallRuleLANDynamic : HMDNetworkRouterFirewallRuleLAN
{
    unsigned char _transportProtocol;
    unsigned char _advertisingProtocol;
    _Bool _advertisingOnly;
    NSString *_serviceType;
}

+ (id)createWithJSONDictionary:(struct NSDictionary *)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7 ruleDictionary:(struct NSDictionary *)arg8;
+ (_Bool)__decodeFlags:(struct NSDictionary *)arg1 advertisingOnly:(_Bool *)arg2;
+ (_Bool)__decodeAdvertisingProtocol:(struct NSDictionary *)arg1 advertisingProtocol:(unsigned char *)arg2;
+ (id)__advertisingProtocolToString:(unsigned char)arg1;
@property(readonly, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic, getter=isAdvertisingOnly) _Bool advertisingOnly; // @synthesize advertisingOnly=_advertisingOnly;
@property(readonly, nonatomic) unsigned char advertisingProtocol; // @synthesize advertisingProtocol=_advertisingProtocol;
@property(readonly, nonatomic) unsigned char transportProtocol; // @synthesize transportProtocol=_transportProtocol;
- (void).cxx_destruct;
- (struct NSDictionary *)prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(struct NSDictionary *)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7 transportProtocol:(unsigned char)arg8 advertisingProtocol:(unsigned char)arg9 advertisingOnly:(_Bool)arg10 serviceType:(id)arg11;

@end

