//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PLUniformTypeIdentifierIdentity;

@interface PLVirtualResourceUniformTypeIdentifierProxy : NSObject
{
    id <PLUniformTypeIdentifierIdentity> _uniformTypeIdentiferID;
}

@property(retain, nonatomic) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentiferID; // @synthesize uniformTypeIdentiferID=_uniformTypeIdentiferID;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool conformsToImage;
- (id)initWithUniformTypeIdentiferID:(id)arg1;

@end

