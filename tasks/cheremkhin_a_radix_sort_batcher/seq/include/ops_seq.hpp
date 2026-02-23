#pragma once

#include "task/include/task.hpp"

#include "cheremkhin_a_radix_sort_batcher/common/include/common.hpp"

namespace cheremkhin_a_radix_sort_batcher {

class CheremkhinARadixSortBatcherSEQ : public BaseTask {
 public:
  static constexpr ppc::task::TypeOfTask GetStaticTypeOfTask() {
    return ppc::task::TypeOfTask::kSEQ;
  }
  explicit CheremkhinARadixSortBatcherSEQ(const InType &in);

 private:
  bool ValidationImpl() override;
  bool PreProcessingImpl() override;
  bool RunImpl() override;
  bool PostProcessingImpl() override;
};

}  // namespace cheremkhin_a_radix_sort_batcher
