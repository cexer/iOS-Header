//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUIMovieCardSectionBuyButtonView.h>

@class SearchUIWatchListUtilities;

@interface SearchUIMovieCardSectionUpNextButtonView : SearchUIMovieCardSectionBuyButtonView
{
    SearchUIWatchListUtilities *_watchListUtility;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SearchUIWatchListUtilities *watchListUtility; // @synthesize watchListUtility=_watchListUtility;
- (void)buttonPressed;
- (void)updateUpNextStatus;
- (id)initIsInUpNext:(_Bool)arg1 cardSectionView:(id)arg2;

@end

