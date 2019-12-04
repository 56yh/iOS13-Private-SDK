//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, VKResourceManager;

@interface VKImage : NSObject
{
    struct CGImage *_imageRef;
    NSData *_data;
    NSString *_name;
    struct Texture2D *_gglTexture;
    struct shared_ptr<md::TextureAtlasRegion> _textureAtlasRegion;
    Box_8bd38d92 _textureCoordinates;
    struct CGRect _collisionRect;
    struct CGPoint _anchorPoint;
    struct CGSize _size;
    double _scale;
    _Bool _hasCollisionRect;
    _Bool _hasAnchorPoint;
    _Bool _usedAsTextureAndImage;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _isTextureReady
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _isImageReady
    VKResourceManager *_resourceManager;
    unsigned char _imageHash[16];
}

- (id).cxx_construct;
- (int)compareTo:(id)arg1;
- (void)setCollisionRect:(struct CGRect)arg1;
- (void)setAnchorPoint:(struct CGPoint)arg1;
- (struct CGRect)collisionRect;
- (struct CGPoint)anchorPoint;
- (double)scale;
- (struct CGSize)size;
- (void)_prepareImage;
- (struct CGImage *)image;
-     // Error parsing type: v24@0:8^{TextureAtlas={vector<md::TextureAtlas::RelocateItem, std::__1::allocator<md::TextureAtlas::RelocateItem> >=^{RelocateItem}^{RelocateItem}{__compressed_pair<md::TextureAtlas::RelocateItem *, std::__1::allocator<md::TextureAtlas::RelocateItem> >=^{RelocateItem}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}i{Matrix<unsigned int, 2, 1>=[2I]}{Matrix<unsigned int, 2, 1>=[2I]}{Matrix<unsigned int, 2, 1>=[2I]}{Matrix<unsigned int, 2, 1>=[2I]}C{shared_ptr<ggl::SamplerState>=^{SamplerState}^{__shared_weak_count}}BII{unique_ptr<unsigned char [], std::__1::default_delete<unsigned char []> >={__compressed_pair<unsigned char *, std::__1::default_delete<unsigned char []> >=*}}{read_write_lock={_opaque_pthread_rwlock_t=q[192c]}}{atomic<bool>=AB}{atomic<bool>=AB}{vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >=^{shared_ptr<md::TextureAtlasPage>}^{shared_ptr<md::TextureAtlasPage>}{__compressed_pair<std::__1::shared_ptr<md::TextureAtlasPage> *, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >=^{shared_ptr<md::TextureAtlasPage>}}}{vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >=^{shared_ptr<md::TextureAtlasPage>}^{shared_ptr<md::TextureAtlasPage>}{__compressed_pair<std::__1::shared_ptr<md::TextureAtlasPage> *, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >=^{shared_ptr<md::TextureAtlasPage>}}}{vector<ggl::Texture2D *, std::__1::allocator<ggl::Texture2D *> >=^^{Texture2D}^^{Texture2D}{__compressed_pair<ggl::Texture2D **, std::__1::allocator<ggl::Texture2D *> >=^^{Texture2D}}}{shared_ptr<ggl::RenderTransaction>=^{RenderTransaction}^{__shared_weak_count}}{mutex={_opaque_pthread_mutex_t=q[56c]}}{mutex={_opaque_pthread_mutex_t=q[56c]}}{vector<std::__1::shared_ptr<md::TextureAtlasRegion>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasRegion> > >=^{shared_ptr<md::TextureAtlasRegion>}^{shared_ptr<md::TextureAtlasRegion>}{__compressed_pair<std::__1::shared_ptr<md::TextureAtlasRegion> *, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasRegion> > >=^{shared_ptr<md::TextureAtlasRegion>}}}{vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}^{Texture2DLoadItem}{__compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}}}{vector<std::__1::shared_ptr<md::TextureAtlasRegion>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasRegion> > >=^{shared_ptr<md::TextureAtlasRegion>}^{shared_ptr<md::TextureAtlasRegion>}{__compressed_pair<std::__1::shared_ptr<md::TextureAtlasRegion> *, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasRegion> > >=^{shared_ptr<md::TextureAtlasRegion>}}}{vector<std::__1::vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > > > >=^{vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >}^{vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >}{__compressed_pair<std::__1::vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > > *, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > > > >=^{vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >}}}}16, name: _prepareTextureWithAtlas:
-     // Error parsing type: v24@0:8^{TextureAtlas={vector<md::TextureAtlas::RelocateItem, std::__1::allocator<md::TextureAtlas::RelocateItem> >=^{RelocateItem}^{RelocateItem}{__compressed_pair<md::TextureAtlas::RelocateItem *, std::__1::allocator<md::TextureAtlas::RelocateItem> >=^{RelocateItem}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}i{Matrix<unsigned int, 2, 1>=[2I]}{Matrix<unsigned int, 2, 1>=[2I]}{Matrix<unsigned int, 2, 1>=[2I]}{Matrix<unsigned int, 2, 1>=[2I]}C{shared_ptr<ggl::SamplerState>=^{SamplerState}^{__shared_weak_count}}BII{unique_ptr<unsigned char [], std::__1::default_delete<unsigned char []> >={__compressed_pair<unsigned char *, std::__1::default_delete<unsigned char []> >=*}}{read_write_lock={_opaque_pthread_rwlock_t=q[192c]}}{atomic<bool>=AB}{atomic<bool>=AB}{vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >=^{shared_ptr<md::TextureAtlasPage>}^{shared_ptr<md::TextureAtlasPage>}{__compressed_pair<std::__1::shared_ptr<md::TextureAtlasPage> *, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >=^{shared_ptr<md::TextureAtlasPage>}}}{vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >=^{shared_ptr<md::TextureAtlasPage>}^{shared_ptr<md::TextureAtlasPage>}{__compressed_pair<std::__1::shared_ptr<md::TextureAtlasPage> *, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >=^{shared_ptr<md::TextureAtlasPage>}}}{vector<ggl::Texture2D *, std::__1::allocator<ggl::Texture2D *> >=^^{Texture2D}^^{Texture2D}{__compressed_pair<ggl::Texture2D **, std::__1::allocator<ggl::Texture2D *> >=^^{Texture2D}}}{shared_ptr<ggl::RenderTransaction>=^{RenderTransaction}^{__shared_weak_count}}{mutex={_opaque_pthread_mutex_t=q[56c]}}{mutex={_opaque_pthread_mutex_t=q[56c]}}{vector<std::__1::shared_ptr<md::TextureAtlasRegion>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasRegion> > >=^{shared_ptr<md::TextureAtlasRegion>}^{shared_ptr<md::TextureAtlasRegion>}{__compressed_pair<std::__1::shared_ptr<md::TextureAtlasRegion> *, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasRegion> > >=^{shared_ptr<md::TextureAtlasRegion>}}}{vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}^{Texture2DLoadItem}{__compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}}}{vector<std::__1::shared_ptr<md::TextureAtlasRegion>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasRegion> > >=^{shared_ptr<md::TextureAtlasRegion>}^{shared_ptr<md::TextureAtlasRegion>}{__compressed_pair<std::__1::shared_ptr<md::TextureAtlasRegion> *, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasRegion> > >=^{shared_ptr<md::TextureAtlasRegion>}}}{vector<std::__1::vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > > > >=^{vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >}^{vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >}{__compressed_pair<std::__1::vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > > *, std::__1::allocator<std::__1::vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > > > >=^{vector<std::__1::shared_ptr<md::TextureAtlasPage>, std::__1::allocator<std::__1::shared_ptr<md::TextureAtlasPage> > >}}}}16, name: prepareTextureWithAtlas:
- (const Box_8bd38d92 *)textureCoordinates;
- (struct Texture2D *)gglTexture;
- (void)dealloc;
- (id)initWithName:(id)arg1 scale:(double)arg2 resourceManager:(id)arg3;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2 usedAsTextureAndImage:(_Bool)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 usedAsTextureAndImage:(_Bool)arg3;

@end

