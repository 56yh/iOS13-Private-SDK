//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSPermanentStorage, NSDate, NSPersonNameComponents, NSString, NSURL;
@protocol NSCopying><NSSecureCoding;

@interface BRNonLocalVersion : NSObject
{
    NSURL *_url;
    NSString *_displayName;
    NSString *_etag;
    unsigned long long _size;
    NSDate *_modificationDate;
    NSString *_lastEditorDeviceName;
    NSPersonNameComponents *_lastEditorNameComponents;
    _Bool _hasThumbnail;
    GSPermanentStorage *_versionsStore;
    long long _sandboxHandle;
    NSURL *_physicalURL;
}

+ (id)listVersionsOfDocumentAtURL:(id)arg1;
@property(nonatomic) _Bool hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property(readonly, nonatomic) NSPersonNameComponents *lastEditorNameComponents; // @synthesize lastEditorNameComponents=_lastEditorNameComponents;
@property(readonly, nonatomic) NSString *lastEditorDeviceName; // @synthesize lastEditorDeviceName=_lastEditorDeviceName;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (id)description;
@property(readonly, nonatomic) id <NSCopying><NSSecureCoding> persistentIdentifier;
- (void)dealloc;
- (id)initWithURL:(id)arg1 physicalURL:(id)arg2 size:(id)arg3 extension:(id)arg4 etag:(id)arg5 hasThumbnail:(_Bool)arg6 displayName:(id)arg7 lastEditorDeviceName:(id)arg8 lastEditorNameComponents:(id)arg9 modificationDate:(id)arg10 versionsStore:(id)arg11;
@property(readonly, nonatomic) _Bool isLatestVersion;
@property(readonly, nonatomic) NSString *lastEditorFormattedName;

@end

