//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;

__attribute__((visibility("hidden")))
@interface _TVTemplateFactory : NSObject
{
    NSBundle *_tvmlKitBundle;
}

- (void)_registerCustomAnimators;
- (void)_registerTemplateControllers;
- (void)_registerStyleSheet:(id)arg1 forTemplate:(id)arg2 parentStyleSheets:(id)arg3;
- (void)registerProductTemplateURL:(id)arg1 forTemplateName:(id)arg2 includeParentStyleSheets:(_Bool)arg3;
- (id)init;

@end

