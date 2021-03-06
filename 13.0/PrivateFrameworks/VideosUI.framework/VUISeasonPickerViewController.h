//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUILibraryFetchControllerViewController.h>

#import <VideosUI/UICollectionViewDataSource-Protocol.h>
#import <VideosUI/UICollectionViewDelegate-Protocol.h>
#import <VideosUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <VideosUI/VUIMediaEntitiesFetchControllerDelegate-Protocol.h>

@class NSArray, NSObject, NSString, VUISeasonPickerCollectionViewCell, _VUISeasonPickerView;
@protocol VUIMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface VUISeasonPickerViewController : VUILibraryFetchControllerViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, VUIMediaEntitiesFetchControllerDelegate>
{
    VUISeasonPickerCollectionViewCell *_sizingCell;
    _Bool _lastViewedSeasonWasManuallyDeleted;
    NSString *_pickerTitle;
    _VUISeasonPickerView *_seasonPickerView;
    NSArray *_seasons;
    NSObject<VUIMediaEntityIdentifier> *_collectionIdentifier;
    VUILibraryFetchControllerViewController *_currentSeasonViewController;
}

@property(nonatomic) _Bool lastViewedSeasonWasManuallyDeleted; // @synthesize lastViewedSeasonWasManuallyDeleted=_lastViewedSeasonWasManuallyDeleted;
@property(retain, nonatomic) VUILibraryFetchControllerViewController *currentSeasonViewController; // @synthesize currentSeasonViewController=_currentSeasonViewController;
@property(retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
@property(retain, nonatomic) NSArray *seasons; // @synthesize seasons=_seasons;
@property(retain, nonatomic) _VUISeasonPickerView *seasonPickerView; // @synthesize seasonPickerView=_seasonPickerView;
@property(retain, nonatomic) NSString *pickerTitle; // @synthesize pickerTitle=_pickerTitle;
- (void).cxx_destruct;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMediaLibrary:(id)arg1 title:(id)arg2 collectionIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

