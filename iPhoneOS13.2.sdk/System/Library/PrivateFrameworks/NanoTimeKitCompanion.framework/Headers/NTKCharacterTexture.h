//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLTexture;

@interface NTKCharacterTexture : NSObject
{
    unsigned int _gid;
    const void *_data;
    int _length;
    id <MTLTexture> _mtlTexture;
}

@property(retain, nonatomic) id <MTLTexture> mtlTexture; // @synthesize mtlTexture=_mtlTexture;
@property(readonly, nonatomic) int length; // @synthesize length=_length;
@property(readonly, nonatomic) const void *data; // @synthesize data=_data;
@property(nonatomic) unsigned int gid; // @synthesize gid=_gid;
- (id)initWithData:(const void *)arg1 length:(int)arg2;

@end

