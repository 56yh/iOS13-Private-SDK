//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol PXPerson;

@interface PXPeopleMergeContentViewController : UIViewController
{
    id <PXPerson> _targetPerson;
    id <PXPerson> _draggedPerson;
}

@property(retain, nonatomic) id <PXPerson> draggedPerson; // @synthesize draggedPerson=_draggedPerson;
@property(retain, nonatomic) id <PXPerson> targetPerson; // @synthesize targetPerson=_targetPerson;
// - (void).cxx_destruct;
- (void)viewDidLoad;
- (CGSize)preferredContentSize;
- (id)initWithTargetPerson:(id)arg1 draggedPerson:(id)arg2;

@end

