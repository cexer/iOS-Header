//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSString, NSURL, SKUISearchFieldController, SKUISearchRequest, SSMetricsSearchEvent;

@protocol SKUISearchFieldDelegate <NSObject>

@optional
- (_Bool)searchFieldControllerShouldBeginEditing:(SKUISearchFieldController *)arg1;
- (void)searchFieldController:(SKUISearchFieldController *)arg1 searchBarDidChangeText:(NSString *)arg2;
- (void)searchFieldController:(SKUISearchFieldController *)arg1 requestSearchWithSearchTerm:(NSString *)arg2 metricsEvent:(SSMetricsSearchEvent *)arg3;
- (void)searchFieldController:(SKUISearchFieldController *)arg1 requestSearchWithURL:(NSURL *)arg2 metricsEvent:(SSMetricsSearchEvent *)arg3;
- (void)searchFieldController:(SKUISearchFieldController *)arg1 requestSearch:(SKUISearchRequest *)arg2;
@end

