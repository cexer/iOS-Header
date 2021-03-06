//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <GameCenterUI/UISearchBarDelegate-Protocol.h>

@class GKSearchBar, NSArray, NSNumber, NSString;
@protocol UISearchBarDelegate;

@interface GKSearchBarView : UICollectionReusableView <UISearchBarDelegate>
{
    GKSearchBar *_searchBar;
    NSNumber *_usePadConstraints;
    id <UISearchBarDelegate> _delegate;
    NSArray *_searchBarConstraints;
    double _leadingMargin;
    double _trailingMargin;
}

+ (double)defaultHeight;
+ (void)initialize;
+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(retain, nonatomic) NSArray *searchBarConstraints; // @synthesize searchBarConstraints=_searchBarConstraints;
@property(nonatomic) id <UISearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSNumber *usePadConstraints; // @synthesize usePadConstraints=_usePadConstraints;
@property(retain, nonatomic) GKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)dealloc;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (void)establishSearchBarConstraints;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

