//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, UIView, _UIInternalDraggingSessionSource;

@protocol _UIViewInternalDraggingSourceDelegate 
- (NSArray *)_requiredContextIDsForDragSessionInView:(UIView *)arg1;
- (long long)_dataOwnerOfDragFromView:(UIView *)arg1;
- (_Bool)_viewSupportsSystemDrag:(UIView *)arg1;
- (void)_viewFailedToDrag:(UIView *)arg1;
- (void)_view:(UIView *)arg1 willBeginDraggingWithSession:(_UIInternalDraggingSessionSource *)arg2;
- (_Bool)_canDragFromView:(UIView *)arg1;
- (NSArray *)_itemsToDragFromView:(UIView *)arg1;
@end

