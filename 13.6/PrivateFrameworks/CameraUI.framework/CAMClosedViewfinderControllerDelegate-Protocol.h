//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMClosedViewfinderController;

@protocol CAMClosedViewfinderControllerDelegate <NSObject>
- (void)closedViewfinderController:(CAMClosedViewfinderController *)arg1 wantsViewfinderOpenForReason:(long long)arg2;
- (void)closedViewfinderController:(CAMClosedViewfinderController *)arg1 wantsViewfinderClosedForReason:(long long)arg2;
@end

