//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIWebFormRotatingAccessoryPopover.h>

#import <UIKitCore/UIWebFormControl-Protocol.h>

@class UIWebSelectTableViewController;

__attribute__((visibility("hidden")))
@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl>
{
    UIWebSelectTableViewController *_tableViewController;
}

@property(retain, nonatomic) UIWebSelectTableViewController *_tableViewController; // @synthesize _tableViewController;
- (void)_userActionDismissedPopover:(id)arg1;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(_Bool)arg5;

@end

