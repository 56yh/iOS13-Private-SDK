//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDGLTextureInfo : NSObject
{
    _Bool _containsMipmaps;
    unsigned int _name;
    unsigned int _target;
    unsigned int _height;
    unsigned int _width;
}

+ (id)textureInfoWithName:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 containsMipmaps:(_Bool)arg5;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned int target; // @synthesize target=_target;
@property(readonly, nonatomic) unsigned int name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool containsMipmaps; // @synthesize containsMipmaps=_containsMipmaps;
- (id)description;
- (void)teardown;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithName:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 containsMipmaps:(_Bool)arg5;

@end

