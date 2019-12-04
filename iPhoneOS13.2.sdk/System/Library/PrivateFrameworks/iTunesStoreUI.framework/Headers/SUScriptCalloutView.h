//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptCalloutView : SUScriptObject
{
    _Bool _isVisible;
    NSString *_subtitle;
    NSString *_title;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_setupCalloutBar;
- (void)_resetCalloutBar;
- (void)_reloadUntructedString;
- (void)_menuDidHideNotification:(id)arg1;
@property(copy) NSString *title;
@property(copy) NSString *subtitle;
- (id)_className;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)setTargetX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)dealloc;
- (id)init;

@end

