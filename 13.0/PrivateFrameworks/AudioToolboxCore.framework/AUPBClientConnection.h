//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol AUPBInspecting;

__attribute__((visibility("hidden")))
@interface AUPBClientConnection : NSObject
{
    NSXPCConnection *xpcconnection;
    id <AUPBInspecting> proxyInterface;
}

@property(retain, nonatomic) id <AUPBInspecting> proxyInterface; // @synthesize proxyInterface;
@property(retain, nonatomic) NSXPCConnection *xpcconnection; // @synthesize xpcconnection;

@end

