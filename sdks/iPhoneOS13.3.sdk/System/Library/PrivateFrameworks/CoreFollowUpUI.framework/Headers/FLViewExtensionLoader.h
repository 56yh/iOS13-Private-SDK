//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFollowUp/FLHeadlessExtensionLoader.h>

@class UIViewController;

@interface FLViewExtensionLoader : FLHeadlessExtensionLoader
{
    UIViewController *_extensionViewController;
}

// - (void).cxx_destruct;
- (void)_setupSessionWithExtension:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_setupSessionIfNeeded:(id )arg1;
- (id)remoteViewController;

@end

