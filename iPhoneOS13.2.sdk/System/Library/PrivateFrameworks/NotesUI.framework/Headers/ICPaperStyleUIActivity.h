//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@protocol ICPaperStyleUIActivityDelegate;

@interface ICPaperStyleUIActivity : UIActivity
{
    id <ICPaperStyleUIActivityDelegate> _delegate;
}

@property(nonatomic) __weak id <ICPaperStyleUIActivityDelegate> delegate; // @synthesize delegate=_delegate;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (long long)activityCategory;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)initWithDelegate:(id)arg1;

@end

