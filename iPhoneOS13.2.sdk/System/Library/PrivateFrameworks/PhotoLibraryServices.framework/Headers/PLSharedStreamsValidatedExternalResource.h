//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLValidatedExternalResource.h>

@class NSString;

@interface PLSharedStreamsValidatedExternalResource : PLValidatedExternalResource
{
    unsigned int _sharedStreamsType;
    NSString *_fingerprint;
}

@property(retain, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(nonatomic) unsigned int sharedStreamsType; // @synthesize sharedStreamsType=_sharedStreamsType;
- (id)description;

@end

