//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HUViewControllerRegistry : NSObject
{
    NSMutableDictionary *_viewControllerClassesByIdentifier;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *viewControllerClassesByIdentifier; // @synthesize viewControllerClassesByIdentifier=_viewControllerClassesByIdentifier;
- (void)registerViewControllerClass:(Class)arg1 forIdentifier:(id)arg2;
- (Class)viewControllerClassForIdentifier:(id)arg1;
- (id)init;

@end

