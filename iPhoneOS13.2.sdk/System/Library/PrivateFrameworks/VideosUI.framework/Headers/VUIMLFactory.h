//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VUIMLFactory : NSObject
{
}

+ (id)_urlForStyleSheetName:(id)arg1;
+ (void)_registerIOStyleSheets;
+ (void)_registerStylesheets;
+ (void)_registerStyles;
+ (void)_registerElements;
+ (id)sharedInstance;
- (id)_URLForResource:(id)arg1 inBundle:(id)arg2;
- (id)_styleSheetURLForTemplate:(id)arg1;
- (id)navigationControllerForTabIdentifier:(id)arg1;
- (id)styleSheetURLForTemplate:(id)arg1;
- (void)parseAppConfigurationForElement:(id)arg1;
- (id)imageForResource:(id)arg1;
- (id)URLForResource:(id)arg1;
- (id)imageProxyForElement:(id)arg1 withLayout:(id)arg2;
- (Class)collectionViewCellClassForElement:(id)arg1;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;
- (id)viewForElement:(id)arg1 existingView:(id)arg2;
- (id)init;

@end

