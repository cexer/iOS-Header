//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface PKSecureElementConsistencyCheckDeviceState : NSObject
{
    NSArray *_applets;
    NSArray *_devicePaymentApplications;
    NSDictionary *_credentialsForAID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *credentialsForAID; // @synthesize credentialsForAID=_credentialsForAID;
@property(copy, nonatomic) NSArray *devicePaymentApplications; // @synthesize devicePaymentApplications=_devicePaymentApplications;
@property(copy, nonatomic) NSArray *applets; // @synthesize applets=_applets;

@end

