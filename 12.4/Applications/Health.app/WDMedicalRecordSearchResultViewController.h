//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WDMedicalRecordTimelineViewController.h"

@class NSPredicate;
@protocol WDMedicalRecordSearchResultViewControllerDelegate;

@interface WDMedicalRecordSearchResultViewController : WDMedicalRecordTimelineViewController
{
    id <WDMedicalRecordSearchResultViewControllerDelegate> _delegate;
    NSPredicate *_predicate;
}

@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) __weak id <WDMedicalRecordSearchResultViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end

