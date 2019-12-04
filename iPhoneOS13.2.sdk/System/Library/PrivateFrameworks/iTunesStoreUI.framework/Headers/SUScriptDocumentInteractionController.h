//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptFunction, WebScriptObject;

@interface SUScriptDocumentInteractionController : SUScriptObject
{
    SUScriptFunction *_cancelFunction;
    SUScriptFunction *_openWithFunction;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_openWithFunction;
- (id)_nativeObject;
- (id)_nativeDocumentInteractionController;
- (id)_cancelFunction;
@property(copy) NSString *UTI;
@property(retain) WebScriptObject *openWithFunction;
@property(retain) WebScriptObject *cancelFunction;
- (id)_className;
- (void)showOpenWithMenuFromNavigationItem:(id)arg1;
- (void)showOpenWithMenuFromDOMElement:(id)arg1;
- (void)dismissMenuAnimated:(id)arg1;
- (void)dealloc;

@end

