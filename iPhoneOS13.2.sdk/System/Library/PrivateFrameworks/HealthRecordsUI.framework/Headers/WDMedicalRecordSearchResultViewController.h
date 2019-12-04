//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthRecordsUI/WDMedicalRecordTimelineViewController.h>

@class NSPredicate;
@protocol WDMedicalRecordSearchResultViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordSearchResultViewController : WDMedicalRecordTimelineViewController
{
    id <WDMedicalRecordSearchResultViewControllerDelegate> _delegate;
    NSPredicate *_predicate;
}

@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) __weak id <WDMedicalRecordSearchResultViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end

