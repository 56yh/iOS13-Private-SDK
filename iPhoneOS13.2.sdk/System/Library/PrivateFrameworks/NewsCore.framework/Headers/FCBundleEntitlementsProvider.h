//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCBundleEntitlementsProviderType-Protocol.h>

@protocol FCCoreConfigurationManager, FCEntitlementsOverrideProviderType;

@interface FCBundleEntitlementsProvider : NSObject <FCBundleEntitlementsProviderType>
{
    id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
    id <FCCoreConfigurationManager> _configurationManager;
}

@property(readonly, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
@property(retain, nonatomic) id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; // @synthesize entitlementsOverrideProvider;
- (void)_fetchEntitlementsWithIgnoreCache:(_Bool)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchEntitlementsWithIgnoreCache:(_Bool)arg1 completion:(id /* block */)arg2;
- (id)initWithConfigurationManager:(id)arg1;

@end

