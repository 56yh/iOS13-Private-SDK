//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRRecentContactsLibrary;

@interface IMDCoreSpotlightDispatchObject : NSObject
{
    _Bool _allowsOverrideOfObjects;
    _Bool _shouldAddToSuggestions;
    _Bool _shouldAddToSpotlight;
    _Bool _shouldAddToCoreRecents;
    CRRecentContactsLibrary *_recentsInstance;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool shouldAddToCoreRecents; // @synthesize shouldAddToCoreRecents=_shouldAddToCoreRecents;
@property(nonatomic) _Bool shouldAddToSpotlight; // @synthesize shouldAddToSpotlight=_shouldAddToSpotlight;
@property(nonatomic) _Bool shouldAddToSuggestions; // @synthesize shouldAddToSuggestions=_shouldAddToSuggestions;
@property(nonatomic) _Bool allowsOverrideOfObjects; // @synthesize allowsOverrideOfObjects=_allowsOverrideOfObjects;
@property(nonatomic) CRRecentContactsLibrary *recentsInstance; // @synthesize recentsInstance=_recentsInstance;
- (void)dealloc;
- (id)init;

@end

