//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQDBGPlaceholder.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDDrawable, NSString;

__attribute__((visibility("hidden")))
@interface GQDBGObjectPlaceholder : GQDBGPlaceholder <GQDNameMappable>
{
    char *mContentType;
    GQDDrawable *mDrawable;
}

+ (const struct StateSpec *)stateForReading;
- (id)drawable;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

