//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UIStackView;

@interface LUIPerformanceTestHintViewController : UIViewController
{
    UIButton *_okButton;
    UILabel *_headerTextLabel;
    UILabel *_secondTextLabel;
    UIStackView *_stackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UILabel *secondTextLabel; // @synthesize secondTextLabel=_secondTextLabel;
@property(retain, nonatomic) UILabel *headerTextLabel; // @synthesize headerTextLabel=_headerTextLabel;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
- (void)okButtonPressed:(id)arg1;
- (id)_secondHintText;
- (id)_headerHintText;
- (id)_createImageViewWithImage:(id)arg1;
- (id)_createTextLabelWithAttributedText:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_setupViews;
- (void)viewDidLoad;

@end

