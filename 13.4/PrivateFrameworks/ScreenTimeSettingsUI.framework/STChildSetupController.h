//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class STIntroductionController, STRootViewModelCoordinator, UIViewController;

@interface STChildSetupController : NSObject
{
    CDUnknownBlockType _completionHandler;
    UIViewController *_initialViewController;
    STRootViewModelCoordinator *_coordinator;
    STIntroductionController *_introductionController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) STIntroductionController *introductionController; // @synthesize introductionController=_introductionController;
@property(retain, nonatomic) STRootViewModelCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) UIViewController *initialViewController; // @synthesize initialViewController=_initialViewController;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)saveValuesForModel:(id)arg1;
- (id)initWithDSID:(id)arg1;

@end

