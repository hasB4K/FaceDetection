//
// Created by hasb4k on 7/12/15.
//

#ifndef FACE_RECOG_THREE_VERTICAL_RECTANGLES_FEATURE_H
# define FACE_RECOG_THREE_VERTICAL_RECTANGLES_FEATURE_H

namespace violajones
{
  class ThreeVerticalRectanglesFeature : public Feature
  {
  public:
    ThreeVerticalRectanglesFeature(Rectangle frame);

    virtual int compute_value(Point win_top_left, float size_ratio, IntegralImage image) override;

    virtual int compute_value(IntegralImage image) override;

    virtual std::string get_type() override;

  public:
    const int min_width = 1;
    const int min_height = 3;
  };
}

#endif /* !FACE_RECOG_THREE_VERTICAL_RECTANGLES_FEATURE_H */
