//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol PXPlacesGeotaggable;

@protocol PXPlacesMapGeotaggableInfoDelegate 

@optional
- (void)imageForGeotaggable:(id <PXPlacesGeotaggable>)arg1 ofSize:(struct CGSize)arg2 networkAccessAllowed:(_Bool)arg3 andCompletion:(void (^)(id <PXPlacesGeotaggable>, struct CGImage *, NSError *, NSDictionary *))arg4;
@end

