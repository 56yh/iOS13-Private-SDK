//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKBundleComplicationDataSourceLoader.h>

@class NSArray;

@interface NTKBundleBundleComplicationLoader : NTKBundleComplicationDataSourceLoader
{
    NSArray *_urls;
}

@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)_loadClassesUsingBlock:(id /* block */)arg1;
- (void)_enumerateBundles:(id /* block */)arg1;

@end

