//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIClassSwapper, UIStoryboardSegueTemplate, UIViewController;

__attribute__((visibility("hidden")))
@interface UIStoryboardDecodingContext : NSObject
{
    UIStoryboardSegueTemplate *_sourceSegueTemplate;
    id _sender;
    UIClassSwapper *_classSwapperTemplate;
    UIViewController *_parentViewController;
    long long _childViewControllerIndex;
    id /* block */ _creator;
}

@property(copy, nonatomic) id /* block */ creator; // @synthesize creator=_creator;
@property(nonatomic) long long childViewControllerIndex; // @synthesize childViewControllerIndex=_childViewControllerIndex;
@property(retain, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) UIClassSwapper *classSwapperTemplate; // @synthesize classSwapperTemplate=_classSwapperTemplate;
@property(retain, nonatomic) id sender; // @synthesize sender=_sender;
@property(retain, nonatomic) UIStoryboardSegueTemplate *sourceSegueTemplate; // @synthesize sourceSegueTemplate=_sourceSegueTemplate;

@end

