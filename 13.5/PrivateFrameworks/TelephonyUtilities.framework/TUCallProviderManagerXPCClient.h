//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallProviderManagerDataSource-Protocol.h>
#import <TelephonyUtilities/TUCallProviderManagerXPCClient-Protocol.h>

@class NSDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, TUCallProviderManagerDataSourceDelegate;

@interface TUCallProviderManagerXPCClient : NSObject <TUCallProviderManagerXPCClient, TUCallProviderManagerDataSource>
{
    _Bool _requestedInitialState;
    int _token;
    id <TUCallProviderManagerDataSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSDictionary *_providersByIdentifier;
    NSDictionary *_localProvidersByIdentifier;
    NSDictionary *_pairedHostDeviceProvidersByIdentifier;
}

+ (id)callProviderManagerServerXPCInterface;
+ (id)callProviderManagerClientXPCInterface;
+ (id)callProviderManagerAllowedClasses;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (id)asynchronousServer;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *pairedHostDeviceProvidersByIdentifier; // @synthesize pairedHostDeviceProvidersByIdentifier=_pairedHostDeviceProvidersByIdentifier;
@property(copy, nonatomic) NSDictionary *localProvidersByIdentifier; // @synthesize localProvidersByIdentifier=_localProvidersByIdentifier;
@property(copy, nonatomic) NSDictionary *providersByIdentifier; // @synthesize providersByIdentifier=_providersByIdentifier;
@property(nonatomic) _Bool requestedInitialState; // @synthesize requestedInitialState=_requestedInitialState;
@property(nonatomic) int token; // @synthesize token=_token;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (oneway void)updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3;
- (void)_updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3;
- (void)_requestInitialState;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serverWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)server;
- (void)invalidate;
- (void)blockUntilInitialStateReceived;
- (void)launchAppForDialRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)donateUserIntentForProviderWithIdentifier:(id)arg1;
- (_Bool)openURL:(id)arg1 isSensitive:(_Bool)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool currentProcessCanAccessInitialState;
@property(nonatomic) __weak id <TUCallProviderManagerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

