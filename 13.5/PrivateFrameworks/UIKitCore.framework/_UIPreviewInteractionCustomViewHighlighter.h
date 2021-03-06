//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIPreviewInteractionHighlighting-Protocol.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCustomViewHighlighter : NSObject <_UIPreviewInteractionHighlighting>
{
    _Bool _customViewFlipsHorizontalAxis;
    UIView *_customView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool customViewFlipsHorizontalAxis; // @synthesize customViewFlipsHorizontalAxis=_customViewFlipsHorizontalAxis;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
- (void)finalizeHighlightForPreviewingContext:(id)arg1;
- (id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3;
- (void)prepareHighlightWithPreviewingContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

