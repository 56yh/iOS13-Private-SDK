//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDResources;

__attribute__((visibility("hidden")))
@interface CHDLegendEntry : NSObject
{
    unsigned long long mFontIndex;
    unsigned int mEntryIndex;
    EDResources *mResources;
}

- (id)description;
- (void)setEntryIndex:(unsigned int)arg1;
- (unsigned int)entryIndex;
- (void)setFont:(id)arg1;
- (id)font;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (unsigned long long)fontIndex;

@end

