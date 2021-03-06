//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>

#import <AXHearingSupport/CCUIContentModuleContentViewController-Protocol.h>

@class NSMutableArray, NSString, UILabel, UIScrollView, UIStackView, UIView;

@interface HACCListViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController>
{
    UILabel *_titleLabel;
    UIView *_headerSeparatorView;
    struct CGSize _previousSize;
    UIScrollView *_scrollView;
    UIStackView *_menuItemsContainer;
    NSMutableArray *_menuItemsViews;
}

- (void).cxx_destruct;
- (double)_menuItemsContainerHeight;
- (void)_layoutMenuItemsForSize:(struct CGSize)arg1;
- (void)willTransitionToExpandedContentMode:(_Bool)arg1;
@property(readonly, nonatomic) double preferredExpandedContentHeight;
- (void)setTitle:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)selectItemWithTitle:(id)arg1;
- (void)removeAllActions;
- (void)addActionWithTitle:(id)arg1 glyph:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double preferredExpandedContentWidth;
@property(readonly, nonatomic) _Bool providesOwnPlatter;
@property(readonly) Class superclass;

@end

