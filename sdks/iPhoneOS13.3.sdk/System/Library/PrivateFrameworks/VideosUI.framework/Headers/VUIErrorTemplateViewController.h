//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class IKViewElement, VUIErrorView;

__attribute__((visibility("hidden")))
@interface VUIErrorTemplateViewController : UIViewController
{
    IKViewElement *_viewElement;
}

@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
// - (void).cxx_destruct;
@property(readonly, nonatomic) VUIErrorView *errorView;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;
- (void)updateWithTemplateElement:(id)arg1;

@end

