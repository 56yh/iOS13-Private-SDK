//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class NSError;
@protocol WFComponentNavigationContext;

@interface WFModuleResourceWarningComponent : CKCompositeComponent
{
    NSError *_resourceError;
    id <WFComponentNavigationContext> _navigationContext;
}

+ (id)newWithResourceError:(id)arg1 navigationContext:(id)arg2 useImportStyle:(_Bool)arg3 importButtonGradient:(id)arg4;
- (void)recoverFromWarning:(id)arg1 buttonIndex:(unsigned long long)arg2;

@end

