//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSString;

@interface SUScriptMediaPickerController : SUScriptViewController
{
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(retain) NSString *prompt;
@property _Bool allowsPickingMultipleItems;
@property(readonly) NSArray *mediaTypes;
- (id)_className;
- (void)setNativeViewController:(id)arg1;
- (id)newNativeViewController;
- (id)initWithMediaTypes:(id)arg1;

@end

